
def win_check(board,mark):
    
    return ((board[7] == mark and board[8] == mark and board[9] == mark) or # across the top
    (board[4] == mark and board[5] == mark and board[6] == mark) or # across the middle
    (board[1] == mark and board[2] == mark and board[3] == mark) or # across the bottom
    (board[7] == mark and board[4] == mark and board[1] == mark) or # down the middle
    (board[8] == mark and board[5] == mark and board[2] == mark) or # down the middle
    (board[9] == mark and board[6] == mark and board[3] == mark) or # down the right side
    (board[7] == mark and board[5] == mark and board[3] == mark) or # diagonal
    (board[9] == mark and board[5] == mark and board[1] == mark)) # diagonal



t = int(input())

for _ in range(t):

    board = ['#']
    
    board.extend([x for x in input()])
    board.extend([x for x in input()])
    board.extend([x for x in input()])
    #print(board)
    
    X_count = board.count('X')
    O_count = board.count('O')
    underscore_count = board.count('_')
    
    #print('X_count ',X_count,'O_Count ',O_count, '_count ', underscore_count)
    reachale = True
    player_1 = False
    player_2 = False
    
    if O_count > X_count:
        reachale = False
    elif X_count > O_count:
        if X_count - O_count != 1:
            reachale = False
            
    if X_count >= 3:
        if(win_check(board,'X')):
            player_1 = True
    
    if O_count >= 3:
        if(win_check(board,'O')):
            player_2 = True
        
    if player_1 and player_2:
        reachale = False
    
    if X_count == O_count and player_1 == True:
        reachale = False
    
    if X_count > O_count and player_2 == True:
        reachale = False
        
        
    if not reachale:
        print('3')
    elif underscore_count == 0 or (player_1 == True or player_2 == True):
        print('1')
    elif underscore_count > 0:
        print('2')
    else:
        print('3')
