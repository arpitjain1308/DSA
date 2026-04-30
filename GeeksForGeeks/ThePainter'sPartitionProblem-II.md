# Painter's Partition Problem

## 🧠 Approach

- Used **Binary Search on Answer**

- Goal:
  - Minimize the **maximum time taken by any painter**

- Given:
  - `arr[]` → length of boards  
  - `k` → number of painters  

- Each painter paints **continuous boards**

---

## 🔹 Key Idea

- We don’t search for index  
- We search for **minimum possible maximum time**

- Range:
start = max(arr)
end = sum(arr)

---

## 🔹 Validity Check (isValid)

- Check if we can assign boards such that:
- No painter paints more than `maxpaint`

- Traverse array:
- Add board length to current painter
- If limit exceeded:
  - Assign new painter
  - Increase painter count

- If painters ≤ `k` → valid  
- Else → not valid  

---

## 🔹 Binary Search

- Pick `mid` (possible answer)

- If valid:
- Store answer
- Try smaller value → `end = mid - 1`

- Else:
- Increase limit → `start = mid + 1`

---

## 💡 Key Insight

- `mid` is the **maximum allowed work per painter**, not exact work  
- We only check if distribution is possible under this limit  

---

## 🧩 Pattern

This problem follows **Binary Search on Answer** pattern.

### 🔹 Used when:
- Need to minimize maximum workload  
- Solution can be validated using helper function  
- Search space is numeric  

---

## ⏱ Complexity

- **Time Complexity:** `O(n * log(sum))`  
- **Space Complexity:** `O(1)`

---

## 💻 Code

```cpp
bool isValid(vector<int>& arr, int k, int maxpaint) {
  int painter = 1, board = 0;

  for (int i : arr) {
      if (i > maxpaint) return false;

      if (board + i <= maxpaint) {
          board += i;
      } else {
          painter++;
          board = i;
      }
  }

  return painter <= k;
}

int minTime(vector<int>& arr, int k) {
  int sum = 0;
  int maxv = arr[0];

  for (int i : arr) {
      sum += i;
      maxv = max(maxv, i);
  }

  int start = maxv;
  int end = sum;
  int ans = -1;

  while (start <= end) {
      int mid = start + (end - start) / 2;

      if (isValid(arr, k, mid)) {
          ans = mid;
          end = mid - 1;
      } else {
          start = mid + 1;
      }
  }

  return ans;
}