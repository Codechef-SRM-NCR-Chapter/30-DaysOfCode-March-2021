series = [0,1]
for i in range(2, 50):
        x = series[i-1] + series[i-2]
        series.append(x)
print(str(series).lstrip("[").rstrip(']'))
