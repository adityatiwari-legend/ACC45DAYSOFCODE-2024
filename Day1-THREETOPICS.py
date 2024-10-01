def chef_winning_chance():
    A, B, C, X = map(int, input().strip().split())
    if X in (A, B, C):
        print("Yes")
    else:
        print("No")
chef_winning_chance()
