def cifra_cesar(texto,deslocamento):
    resultado = "" 
    texto = list(texto)
    n = len(texto)
    for i in range(0,n):
        if texto[i] == " ":
            continue
        texto[i] = chr(ord(texto[i]) + deslocamento)
    return resultado.join(texto)

# testando
texto = "Cifra de César"
deslocamento = 3
print("Texto original")
print(texto)
print("Texto Criptografado")
print(cifra_cesar(texto,deslocamento))
