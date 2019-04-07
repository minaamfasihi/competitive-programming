def find_product(lst):
    if not lst:
        return lst
    prod = 1
    for i in lst:
        prod = prod * i
    for key, val in enumerate(lst):
        lst[key] = (prod // lst[key])
    return lst
