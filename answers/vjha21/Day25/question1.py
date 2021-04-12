""" A man has N moves to make and in each move, it will select one of the following:
        1. Go to (X-1,0) from (X,0)
        2. Go to (X+1,0) from (X,0)
        3. Remain at its current position
    Calculate sum(abs(X)+abs(Y)) for all reachable (X,Y)        
"""


def get_coordinates(possibe_coordinates, x_coordinates, Moves, curr_move):
    # coordinates = []
    # initial_coordinate = [0, 0]
    # curr_move = 0

    if curr_move == Moves:
        return possible_coordinates.append(x_coordinates)
    get_coordinates(possible_coordinates, x_coordinates + 1, Moves, curr_move + 1)
    get_coordinates(possible_coordinates, x_coordinates - 1, Moves, curr_move + 1)
    get_coordinates(possible_coordinates, x_coordinates, Moves, curr_move + 1)


""" def go_fwd(coordinate):
    coordinate[0] += 1
    return coordinate


def go_bkwd(coordinate):
    coordinate[0] += 1
    return coordinate


def remain_still(coordinate):
    return coordinate """


def get_sum(possible_coordinates):
    summ = 0
    for coordinate in possible_coordinates:
        summ += abs(coordinate)
    return summ


if __name__ == "__main__":
    Moves = 2
    test_cases = int(input("Enter the number of test cases : "))
    while test_cases != 0:
        Moves = int(input("Enter the number of Moves a man can move : "))
        x_coordinate = 0
        possible_coordinates = []
        get_coordinates(possible_coordinates, x_coordinate, Moves, 0)
        possible_coordinates.sort()
        print("All possible x_positions a man can reach are : ", possible_coordinates)

        print(
            "The abs sum of all the coordinates are : ",
            get_sum(possible_coordinates),
            "\n",
        )
        test_cases -= 1