subjects = ["Physics", "Chemistry", "Math"]
tests = ["Assignment", "Coursework", "Midterm", "Final Exam"]

all_marks = []

print("Student Marks Calculator")

# Get marks for each subject
for sub in subjects:
    print("\nEnter marks for", sub)
    marks = []
    for test in tests:
        m = float(input(test + ": "))
        marks.append(m)
    all_marks.append(marks)

print(all_marks)

# Calculate averages
sub_averages = []
total = 0

for i in range(3):
    sum_sub = 0
    for j in range(4):
        sum_sub += all_marks[i][j]
    avg = sum_sub / 4
    sub_averages.append(avg)
    total += sum_sub

overall_avg = total / 12

# Display results
print("\nResults:")

for i in range(3):
    print(subjects[i] + " Average:", round(sub_averages[i], 2))

print("\nOverall Average:", round(overall_avg, 2))
