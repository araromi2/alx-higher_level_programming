#!/usr/bin/python3
def weight_average(my_list=[]):
    if my_list:
        return sum([score * weight for score, weight in my_list]) /\
        sum([weight for score, weight in my_list])
    return 0
