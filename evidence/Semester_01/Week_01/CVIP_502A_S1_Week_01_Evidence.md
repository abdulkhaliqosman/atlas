CVIP 502A • SEMESTER 1 • WEEK 01 • EVIDENCE

Image Memory Inspector

Assignment: [Image Memory Inspector](https://github.com/abdulkhaliqosman/atlas-mscs-cvip/blob/main/Semester_01/Week_01/CVIP_502A_S1_Week_01_Assignment_Image_Memory_Inspector.md)

# 1. Engine Reference

| Field | Value |
| --- | --- |
| Repository | github.com/abdulkhaliqosman/atlas |
| Commit | <sha — fill in when the results below are produced> |
| Build | <clean configure and build / notes> |
| Entry point | `ctest --test-dir build -R week01_image` and `build/tools/week01_image_inspector <image>` |

# 2. Predictions Made Before Running

<Written by hand before running anything. Never edited afterwards. If a prediction turns out wrong, leave it here and explain the discrepancy under Results.>

- Memory-layout sketch of the $3\times2$, stride-5 buffer (a text diagram or table is fine):
- Row-start offsets:
- Offset and value of each of the six logical pixels:
- What the packed-row formula reads at $(0,1)$, and why:
- Expected metadata of the loaded image — width, height, channels, element type, channel order, stride:
- Lifetime rule for the view:

# 3. Results

| Quantity | Predicted | Produced | Match |
| --- | --- | --- | --- |

# 4. Test Output

```text
<pasted ctest --output-on-failure run>
```

# 5. Captures

- `captures/<file>` — <what it shows>

# 6. Engineering Note

<150–250 words answering the four analysis questions in assignment section 6.>

# 7. AI-Usage Record

Declared level: AMBER (Week 1 onboarding exception, assignment section 8)
AI assistance: <None / Light / Moderate / Heavy> — <one sentence>
Boundary: <how the predictions, expected values and correctness checks stayed student-authored>

# 8. Quiz Outcome

| Attempt | Score | Missed | Mapped sections | Retry result |
| --- | --- | --- | --- | --- |

# 9. Open Questions

- <unresolved conceptual or engineering gap>

# 10. Time Record

| Session | Estimate | Actual | Notes |
| --- | --- | --- | --- |
| 1 | 40–65m | | |
| 2 | 40–65m | | |
| 3 | 60–90m | | |
| 4 | 25–45m | | |
| Total | 2h45m–4h25m | | |
