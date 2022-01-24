numbers = []
for i in range(5):
    string = input()
    if "MOLANA" in string or "HAFEZ" in string:
        numbers.append(str(i + 1))
print(" ".join(numbers) if len(numbers) else "NOT FOUND!")