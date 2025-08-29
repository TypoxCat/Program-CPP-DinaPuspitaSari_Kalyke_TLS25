1. Start.
2. Read integer `n` (length of the array).
3. Declare an array `arr` of size `n`.
4. Read all `n` integers into `arr`.
5. Initialize `sum = 0`.
6. For each element in the array with index `i` from `0` to `n-1`:
    a. If `i` is even:
        i. Take `arr[i]`.
        ii. If `arr[i]` is negative:
            - Mark it as negative (`isNegative = true`) and make it positive temporarily.
        iii. Reverse its digits:
            - While the number > 0:
                - Take the last digit using modulo (`digit = num % 10`).
                - Append it to the reversed number.
                - Remove the last digit from the original number (`num = num / 10`).
            - If the original number was `0`, keep it as `0`.
        iv. If the original number was negative, make the reversed number negative.
        v. Replace `arr[i]` with this reversed number.
    b. Else (if `i` is odd):
        - Do nothing (leave `arr[i]` as is).
    c. Add `arr[i]` to `sum`.
7. After the loop ends, output `sum`.
8. End.
