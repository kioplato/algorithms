def binary_search(array, target):
    # 'target' does not exist in array.
    if not array: return -1

    mid = len(array) // 2

    # Found target.
    if array[mid] == target: return mid

    # Divide and conquer.
    if array[mid] > target:
        return binary_search(array[:mid], target)
    else:
        index = binary_search(array[mid + 1:], target)
        return index + mid + 1 if index >= 0 else index
