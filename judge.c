#include <stdio.h>

int cal_score(int score[], int judge_type[], int n){
  int i,j, numOfPro=0, numOfAud=0; 
  double sum1, sum2;
  for(i=0;i<n;i++){
    switch(judge_type[i]){
    case 1:sum1+=score[i]; numOfPro++;break;
    case 2:sum2+=score[i]; numOfAud++;break;
    default:;
    };
    if(numOfPro){
      sum1 = (int)sum1/numOfPro;
    }
    if(numOfAud){
      sum2 = (int)sum2/numOfAud;
    }
    ret = sum1*0.6 + sum2* 0.4;
  }
}
