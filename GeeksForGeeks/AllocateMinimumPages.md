# Book Allocation Problem

## 🧠 Approach

- Used **Binary Search on Answer**

- Goal:
  - Minimize the **maximum number of pages** assigned to any student

- Given:
  - `arr[]` → pages in each book  
  - `m` → number of students  

---

## 🔹 Key Idea

- We don’t search for index  
- We search for **minimum possible maximum pages**

- Range:
start = 0
end = sum of all pages

---

## 🔹 Validity Check (isValid)

- Check if it is possible to distribute books such that:
- No student gets more than `maxallowedpages`

- Traverse array:
- Add pages to current student
- If limit exceeded:
  - Assign books to next student
  - Increase student count

- If number of students ≤ `m` → valid  
- Else → not valid  

---

## 🔹 Binary Search

- Calculate `mid` (possible answer)

- If valid:
- Store answer
- Try smaller value → `end = mid - 1`

- Else:
- Increase limit → `start = mid + 1`

---

## 💡 Key Insight

- Answer lies in **search space of possible values**, not indices  
- Use binary search to minimize the maximum load  

---

## 🧩 Pattern

This problem follows **Binary Search on Answer** pattern.

### 🔹 Used when:
- Need to minimize or maximize a value  
- Solution can be validated using a helper function  
- Search space is numeric  

---

## ⏱ Complexity

- **Time Complexity:** `O(n * log(sum))`  
- **Space Complexity:** `O(1)`

---

## 💻 Code

```cpp
#include <iostream>
using namespace std;

bool isValid(int arr[], int n, int m, int maxallowedpages) {
  int stu = 1, page = 0;

  for (int i = 0; i < n; ++i) {
      if (arr[i] > maxallowedpages) return false;

      if (page + arr[i] <= maxallowedpages) {
          page += arr[i];
      } else {
          stu++;
          page = arr[i];
      }
  }

  return stu <= m;
}

int bookallocation(int arr[], int n, int m) {
  if (n < m) return -1;

  int sum = 0;
  for (int i = 0; i < n; ++i) sum += arr[i];

  int start = 0;
  int end = sum;
  int ans = -1;

  while (start <= end) {
      int mid = start + (end - start) / 2;

      if (isValid(arr, n, m, mid)) {
          ans = mid;
          end = mid - 1;
      } else {
          start = mid + 1;
      }
  }

  return ans;
}

int main() {
  int arr[] = {2, 1, 3, 4};
  int n = sizeof(arr) / sizeof(int);
  int m = 2;

  int ans = bookallocation(arr, n, m);

  cout << "Minimum of maximum pages allocated to a student: " << ans << endl;
  return 0;
}