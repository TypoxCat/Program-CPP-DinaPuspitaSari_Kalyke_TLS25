1. Define an array `lightDuration` to store the duration of each color:
   - Yellow = 3 seconds
   - Red = 80 seconds
   - Green = 20 seconds

2. Define an array `color` to store the names of the colors in the cycle:
   - Index 0 = Yellow
   - Index 1 = Red
   - Index 2 = Green

3. Input `duration` (the target second) from the user.

4. Adjust the `duration` by subtracting 44 because:
   - At second 45, the light starts at Yellow.
   - So we normalize time relative to this point.

5. Initialize `state` to 0 (Yellow), since the light starts at Yellow after the 44-second mark.

6. Repeat the following steps while:
   - `duration > 0` AND
   - `duration >= lightDuration[state]`
   a. Subtract the current state's duration: 
      `duration -= lightDuration[state]`
   b. Move to the next state:
      - If `state == 2` (Green), reset to 0 (Yellow)
      - Else, increment state by 1
   (This cycles through Yellow → Red → Green repeatedly.)

7. After the loop ends, the remaining `state` indicates the current color.

8. Output `color[state]` as the last color shown.
