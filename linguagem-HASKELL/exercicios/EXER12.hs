{- 12) Escreva um algoritmo que leia o número de identificação, as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação, e calcule a média de
aproveitamento, usando a fórmula: MA := (nota1 + nota 2 * 2 + nota 3 * 3 + ME)/7. A atribuição dos conceitos obedece a tabela abaixo. O algoritmo deve escrever o número do aluno, suas notas, a
média dos exercícios, a média de aproveitamento, o conceito correspondente e a mensagem
'Aprovado' se o conceito for A, B ou C, e 'Reprovado' se o conceito for D ou E. Média de
aproveitamento e conceito:
>= 90 A
>= 75 < 90 B
>= 60 < 75 C
>= 40 < 60 D
 < 40 E
-}

main :: IO ()
main = do
    putStrLn "Digite o número de identificação do aluno:"
    idStr <- getLine
    let idAluno = read idStr :: Int
    
    putStrLn "Digite a primeira nota:"
    nota1Str <- getLine
    let nota1 = read nota1Str :: Float
    
    putStrLn "Digite a segunda nota:"
    nota2Str <- getLine
    let nota2 = read nota2Str :: Float
    
    putStrLn "Digite a terceira nota:"
    nota3Str <- getLine
    let nota3 = read nota3Str :: Float
    
    putStrLn "Digite a média dos exercícios:"
    meStr <- getLine
    let me = read meStr :: Float
    
    let ma = (nota1 + nota2 * 2 + nota3 * 3 + me) / 7
    let conceito = determinarConceito ma
    let situacao = if conceito `elem` ["A", "B", "C"] then "Aprovado" else "Reprovado"
    
    putStrLn $ "Número do aluno: " ++ show idAluno
    putStrLn $ "Notas: " ++ show nota1 ++ ", " ++ show nota2 ++ ", " ++ show nota3
    putStrLn $ "Média dos exercícios: " ++ show me
    putStrLn $ "Média de aproveitamento: " ++ show ma
    putStrLn $ "Conceito: " ++ conceito
    putStrLn $ "Situação: " ++ situacao

determinarConceito :: Float -> String
determinarConceito ma
    | ma >= 90 = "A"
    | ma >= 75 = "B"
    | ma >= 60 = "C"
    | ma >= 40 = "D"
    | ma < 40 = "E"
    | otherwise = "Valor inválido"