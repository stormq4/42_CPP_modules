import sys
import random

# Check if an integer argument and a filename argument are provided
if len(sys.argv) > 2:
    try:
        count = int(sys.argv[1])
        filename = sys.argv[2]
    except ValueError:
        print("Invalid arguments. Please provide a valid integer count and a filename.")
        sys.exit(1)
else:
    print("Invalid arguments. Please provide a valid integer count and a filename.")
    sys.exit(1)

# Generate a list of random integers betweeen range of (x, y)
random_integers = [random.randint(-1000000, 1000000) for _ in range(count)]

# Write the list to the specified file
with open(filename, 'w') as file:
    for num in random_integers:
        file.write(str(num) + '\n')

# run -> python randomIntegers.py (count) (filename)