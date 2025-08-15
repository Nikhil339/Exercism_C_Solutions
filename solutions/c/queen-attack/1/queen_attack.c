#include "queen_attack.h"

attack_status_t can_attack(position_t queen_1, position_t queen_2){
    attack_status_t status;
    int chess[8][8]={0};

    int q1r = queen_1.row;
    int q1c = queen_1.column;
    int q2r = queen_2.row;
    int q2c = queen_2.column;

    if (q1r<8 && q1c<8 && q2r<8 && q2c<8){
        chess[queen_1.row][queen_1.column] = 1;
        
        for (int i = q1r; i<8; i++){
            chess[i][q1c] = 1;
        }

        for (int i = q1c; i<8; i++){
            chess[q1r][i] = 1;
        }

        for (int i = q1r, j = q1c; i<8 && j<8; i++, j++){
            chess[i][j] = 1;
        }

        for (int i = q1r, j = q1c; i>=0 && j<8; i--, j++){
            chess[i][j] = 1;
        }

        for (int i = q1r; i>=0; i--){
            chess[i][q1c] = 1;
        }

        for (int i = q1c; i>=0; i--){
            chess[q1r][i] = 1;
        }

        for (int i = q1r, j = q1c; i>=0 && j>=0; i--, j--){
            chess[i][j] = 1;
        }

        for (int i = q1r, j = q1c; i<8 && j>=0; i++, j--){
            chess[i][j] = 1;
        }

        if (q1r == q2r && q1c == q2c){
            status = INVALID_POSITION;
            return status;
        } else if (chess[q2r][q2c] == 1){
            status = CAN_ATTACK;
            return status;
        } else {
            status = CAN_NOT_ATTACK;
            return status;
        }
        
    } else {
        status = INVALID_POSITION;
        return status;
    }
}