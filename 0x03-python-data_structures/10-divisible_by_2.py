#!/usr/bin/python3
def divisible_by_2(my_list=[]):
    if not my_list:
        return None
    div_list = []
    for elem in my_list:
        if not elem % 2:
            div_list.append(True)
        else:
            div_list.append(False)
    return div_list
