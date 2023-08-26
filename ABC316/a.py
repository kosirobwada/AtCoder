def min_switches_needed(N, X, Y, Z):
    total_switches = 0
    
    for i in range(N):
        majority_seats = (Z[i] + 1) // 2
        if majority_seats > Y[i]:
            total_switches += majority_seats - Y[i]
    
    return total_switches

N = int(input())
X = list(map(int, input().split()))
Y = list(map(int, input().split()))
Z = list(map(int, input().split()))

result = min_switches_needed(N, X, Y, Z)
print(result)
