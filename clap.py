import sounddevice as sd
import numpy as np
import pyautogui
import time

PEAK_THRESHOLD = 0.4   # Based on your data (IMPORTANT)
CLAP_GAP = 0.6
COOLDOWN = 2

last_clap_time = 0
last_trigger_time = 0
clap_count = 0

prev_was_loud = False  # edge detection

def detect_clap(indata, frames, time_info, status):
    global last_clap_time, clap_count, last_trigger_time, prev_was_loud

    audio = indata.flatten()
    peak = np.max(np.abs(audio))
    current_time = time.time()

    is_loud = peak > PEAK_THRESHOLD

    # Detect ONLY rising edge (very important)
    if is_loud and not prev_was_loud:

        if current_time - last_trigger_time < COOLDOWN:
            prev_was_loud = True
            return

        if current_time - last_clap_time < CLAP_GAP:
            clap_count += 1
        else:
            clap_count = 1

        last_clap_time = current_time

        if clap_count == 2:
            print("Double clap detected!")
            pyautogui.hotkey('win', 'd')
            last_trigger_time = current_time
            clap_count = 0

    prev_was_loud = is_loud


with sd.InputStream(callback=detect_clap):
    print("Listening for REAL double clap...")
    while True:
        pass