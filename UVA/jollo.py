import numpy as np

prince = []
princess = []

for i in range(3):
  princess.append(input())

for i in range(2):
  prince.append(input())

prince_max_card = max(prince)
princess_max_card = max(princess)
prince_min_card = min(prince)
princess_min_card = min(princess)

win_counts_prince = 0
win_counts_princess = 0

if prince_min_card > princess_max_card:
  ind = princess_min_card
  while ind + 1 in princess:
    ind += 1

  print ind

elif prince_max_card < princess_min_card:
  print -1

elif prince_max_card < np.median(princess):
  print -1
