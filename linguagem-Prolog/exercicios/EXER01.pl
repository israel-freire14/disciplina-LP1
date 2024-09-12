% Criar um cenário de gestão de projetos, onde temos informações sobre projetos, membros da equipe, e suas funções. A base de conhecimento deve ter fatos com os projetos, com membros, com
% função, com quem trabalha em que projeto além de regras necessárias para responder as seguintes perguntas entre outras.
% perguntas 1. Quem são os gerentes de cada projeto? 2. Quem são os desenvolvedores que trabalham no proj1? 3. Em quais projetos João trabalha? 4. Quem são os analistas de proj1? 5. Quais membros da equipe trabalham no proj3?

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