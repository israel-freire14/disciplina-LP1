{- 11) Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de etiqueta e a escolha da condição de pagamento. Utilize os códigos da tabela a seguir para
 ler qual a condição de pagamento escolhida e efetuar o cálculo adequado.
 Código condição de pagamento
 1. À vista em dinheiro ou cheque, recebe 10% de desconto
 2. À vista no cartão de crédito, recebe 15% de desconto
 3. Em duas vezes, preço normal de etiqueta sem juros
 4. Em duas vezes, preço normal de etiqueta mais juros de 10% -}

main :: IO ()
main = do
    putStrLn "Digite o preço do produto:"
    precoStr <- getLine
    let preco = read precoStr :: Float
    
    putStrLn "Escolha a condição de pagamento:"
    putStrLn "1. À vista em dinheiro ou cheque, recebe 10% de desconto"
    putStrLn "2. À vista no cartão de crédito, recebe 15% de desconto"
    putStrLn "3. Em duas vezes, preço normal de etiqueta sem juros"
    putStrLn "4. Em duas vezes, preço normal de etiqueta mais juros de 10%"
    condicaoStr <- getLine
    let condicao = read condicaoStr :: Int
    
    let valorFinal = calcularValor preco condicao
    putStrLn $ "O valor a ser pago é: " ++ show valorFinal

calcularValor :: Float -> Int -> Float
calcularValor preco condicao
    | condicao == 1 = preco * 0.90
    | condicao == 2 = preco * 0.85
    | condicao == 3 = preco
    | condicao == 4 = preco * 1.10
    | otherwise = error "Condição de pagamento inválida"