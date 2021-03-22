##Distribute extra candies among the kids such that he or she can have the gratest number of candies

def candy_distributor(array, extra_candies):
    candy_list = array
    current_candy = 0
    output_array = []
    for candy in candy_list:
        current_candy = candy + extra_candies
        output_array.append(is_gratest_candy(candy_list, current_candy))

    return output_array
        

def is_gratest_candy(candy_list, current_candy):
    greatest = True
    for candy in candy_list:
        if current_candy < candy:
            greatest = False
    return greatest

if __name__ == "__main__":
    candies = [2,3,5,1,3]
    #candies = [2,3,5,1,3,7,8,1,1,1]
    extra_candies = 3
    print(candy_distributor(candies, extra_candies))