def find_last_elem(arr):
    if arr:
        i = len(arr) - 1
        while i >= 0:
            if arr[i] != -1:
                return i
            i = i - 1


def clone_even_numbers(arr):
    if arr is None or not arr:
        return arr
    end = len(arr)
    i = find_last_elem(arr)
    while i >= 0:
        if arr[i] % 2 == 0:
            end = end - 1
            arr[end] = arr[i]
            end = end - 1
            arr[end] = arr[i]
        else:
            end = end - 1
            arr[end] = arr[i]
        i = i - 1
    return arr

print(clone_even_numbers([1, 2, 4, 5, 6, 7, -1, -1, -1]))
