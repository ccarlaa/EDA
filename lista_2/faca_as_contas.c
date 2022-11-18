int faz_conta_direito(int parcelas, char op) {
    int soma = 0;

    for(int i = 0; i < parcelas; i++) {
        int value = 0;
        scanf("%d", &value);

        if(i == 0) {
            soma = value;
        }

        if(op == '-' && i != 0) {
            soma -= value;
        }
        else if(op == '+' && i != 0) {
            soma += value;
        }
    }

    return soma;
}
