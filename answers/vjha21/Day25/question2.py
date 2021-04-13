""" Initial position : (0,0)
    To reach : (X,Y)
    Possible moves : (x+1,y+1) AND (x+1,y)

    To find minimum number of moves that you require to reach the destination if possible
"""


def minimum_moves(X, Y, des_x, des_Y, curr_move):
    """if X == des_x and Y == des_Y:
    return curr_move"""
    """ minimum_moves(X + 1, Y, des_x, des_Y, curr_move + 1)
    minimum_moves(X + 1, Y + 1, des_x, des_Y, curr_move + 1) """

    if des_Y > des_x:
        print("Destination Unreachable.")
    cond = True
    while cond:
        if des_x > X and des_Y > Y:
            X += 1
            Y += 1
            curr_move += 1
        elif des_x > X:
            X += 1
            Y = Y
            curr_move += 1
        elif X == des_x and Y == des_Y:
            cond = False
        print("Current position :", X, ",", Y)
    return curr_move


if __name__ == "__main__":
    # des_x, des_y = 18, 11
    test_cases = int(input("Enter number of test cases : "))
    while test_cases != 0:
        input_x_y = input("Enter X and Y co-ordinates of destination : ")
        des_x, des_y = input_x_y.split()
        print(
            "Minimum number of moves required to reach destination are :",
            minimum_moves(0, 0, int(des_x), int(des_y), 0),
        )
        test_cases -= 1
