{- 10) O IMC – Indice de Massa Corporal é um critério da Organização Mundial de Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta. A fórmula é IMC = peso / (altura)2
 Elabore um algoritmo que leia o peso e a altura de um adulto e mostre sua condição de acordo com a tabela abaixo.
 Condições da IMC em adultos:
 Abaixo de 18,5 Abaixo do peso
 Entre 18,5 e 25 Peso normal
 Entre 25 e 30 Acima do peso
 Acima de 30 obeso -}

main :: IO ()
main = do
    putStrLn "Digite o peso (kg):"
    pesoStr <- getLine
    let peso = read pesoStr :: Float
    
    putStrLn "Digite a altura (m):"
    alturaStr <- getLine
    let altura = read alturaStr :: Float
    
    let imc = peso / (altura ^ 2)
    putStrLn $ "Seu IMC é: " ++ show imc
    putStrLn $ "Sua condição é: " ++ condicaoIMC imc

condicaoIMC :: Float -> String
condicaoIMC imc
    | imc < 18.5 = "Abaixo do peso"
    | imc >= 18.5 && imc < 25 = "Peso normal"
    | imc >= 25 && imc < 30 = "Acima do peso"
    | imc >= 30 = "Obeso"
    | otherwise = "Valor inválido"