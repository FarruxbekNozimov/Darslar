
    printf(">>> ");
    scanf("%d", &a);

    for(i=1; i<=a; i++){
        for(j=1; j<=a; j++){
            if(i==1 || i==a || j==1 || j==a || j>a-j || j>j-a){
                