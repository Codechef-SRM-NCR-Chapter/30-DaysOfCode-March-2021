class solution:
  def kidswithcandies(self, candies:list[int], extracandies: int) -> list[bool]:
        Candies = [2, 3, 5, 1, 3]
        extracandies = 3
        accum_list = [True]

        highest_candies = 5
        num += extracandies

        [0, 1, 2, 3, 4]

        accum_list = []
        highest_candies = max(candies)

        for num in candies:
            if num + extracandies >= highest_candies:
                accum_list.append(True)
            else:
                accum_list.append(False)
        return accum_list
