from libconv import *


def menu():
    print("----------------------------------------------")
    print("---  Estudo de Funções Python             ----")
    print("---       Conversores                      ---")
    print("----------------------------------------------")

    print("\nOpções válidas:")

    print(" 1 - Converter graus Celsius em  graus Farenheit")
    print(" 2 - Converter graus Farenheit em  graus Celsius")
    print(" 0 - Sair")


def main():
    while True:

        menu()

        opt = int(input("Escolha a opção desejada: "))
        resultado = ""

        match opt:
            case 1:
                c = float(input("Entre com a temperatura em °C: "))
                resultado = "%8.2f °C convertidos em °F e: %8.2f" % (c, CtoF(c))

            case 2:
                f = float(input("Entre com a temperatura em °F: "))
                resultado = "%8.2f °F convertidos em °C é: %8.2f" % (f, FtoC(f))
            case 0:
                break

        # os.system('clear')
        print("Resultado: %-50s" % resultado)


if __name__ == '__main__':
    main()
