/*
   Gerenciamento de faturamento diario de uma frota de 10 motoboys
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int QTDE_MOTOBOYS = 10;
    double faturamento[QTDE_MOTOBOYS] = {0};
    int opcao;
    int moto;
    double valor;

    cout << fixed << setprecision(2);

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "0 - Finalizar o dia\n";
        cout << "1 - Informar valor de uma entrega\n";
        cout << "2 - Listar faturamentos\n";
        cout << "3 - Listar comissoes\n";
        cout << "4 - Motoboy destaque\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao)
        {
            case 0:
                cout << "Encerrando o dia...\n";
                break;

            case 1:
                do
                {
                    cout << "Numero do motoboy (1 a " << QTDE_MOTOBOYS << "): ";
                    cin >> moto;
                    if (moto < 1 || moto > QTDE_MOTOBOYS)
                    {
                        cout << "Motoboy invalido! Digite um numero entre 1 e " << QTDE_MOTOBOYS << ".\n";
                    }
                }
                while (moto < 1 || moto > QTDE_MOTOBOYS);

                do
                {
                    cout << "Valor da entrega: R$ ";
                    cin >> valor;
                    if (valor <= 0)
                    {
                        cout << "Valor invalido! Digite um valor positivo.\n";
                    }
                }
                while (valor <= 0);

                faturamento[moto - 1] += valor;
                break;

            case 2:
            {
                double total = 0;
                cout << "\n";
                for (int i = 0; i < QTDE_MOTOBOYS; i++)
                {
                    cout << "Moto: " << (i + 1) << " - R$ " << faturamento[i] << "\n";
                    total += faturamento[i];
                }
                cout << "Total: R$ " << total << "\n";
                break;
            }

            case 3:
            {
                double totalComissoes = 0;
                cout << "\n";
                for (int i = 0; i < QTDE_MOTOBOYS; i++)
                {
                    double comissao = faturamento[i] * 0.10;
                    cout << "Moto: " << (i + 1) << " - Comissao: R$ " << comissao << "\n";
                    totalComissoes += comissao;
                }
                cout << "Total de comissoes: R$ " << totalComissoes << "\n";
                break;
            }

            case 4:
            {
                int indiceDestaque = 0;
                for (int i = 1; i < QTDE_MOTOBOYS; i++)
                {
                    if (faturamento[i] > faturamento[indiceDestaque])
                    {
                        indiceDestaque = i;
                    }
                }
                cout << "\nMoto que mais faturou: " << (indiceDestaque + 1)
                     << " - R$ " << faturamento[indiceDestaque] << "\n";
                break;
            }

            default:
                cout << "Opcao invalida! Tente novamente.\n";
                break;
        }

    }
    while (opcao != 0);

    return 0;
}
