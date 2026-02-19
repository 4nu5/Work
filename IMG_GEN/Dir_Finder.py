import cv2
import os

# 1. See where Python is looking
print("Current Working Directory:", os.getcwd())

# 2. Check if the file exists before reading
path = '/Users/collinlaxman/Downloads/IMG_0896.jpeg'
if os.path.exists(path):
    print("File found!")
    img = cv2.imread(path, 0)
    cv2.imshow('TEST', img)
    cv2.waitKey(0)
    cv2.destroyAllWindows()
else:
    print(f"File NOT found at: {os.path.abspath(path)}")