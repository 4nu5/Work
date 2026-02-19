import cv2

import cv2

img = cv2.imread('/Users/collinlaxman/Downloads/IMG_0897.HEIC', 1)

if img is None:
    print("Error: Could not find the image! Check if the filename is correct.")
else:
    # Only resize if the image was found
    img = cv2.resize(img, None, fx=5, fy=3)
    cv2.imshow('TEST', img)
    cv2.waitKey(0)
    cv2.destroyAllWindows()