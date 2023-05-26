import cv2
import numpy as np

img = cv2.imread('cat1.jpg')

low=[22,59,75]
high=[166,205,215]

hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)
mask = cv2.inRange(hsv, np.array(low), np.array(high))

contours, _ = cv2.findContours(mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

min_area = 100
filtered_contours = [cnt for cnt in contours if cv2.contourArea(cnt) > min_area]

for cnt in filtered_contours:
    x, y, w, h = cv2.boundingRect(cnt)
    cv2.rectangle(img, (x, y), (x+w, y+h), (0, 255, 0), 2)

cv2.imshow('cat with detected eyes', img)
cv2.imshow('Eyes', mask)
cv2.waitKey(0)

cv2.destroyAllWindows()
