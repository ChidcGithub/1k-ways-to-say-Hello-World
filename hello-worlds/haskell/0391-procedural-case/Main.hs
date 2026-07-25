data Language = English | Spanish | French

greet :: Language -> String
greet lang = case lang of
    English -> "Hello, World!"
    Spanish -> "Hola, Mundo!"
    French  -> "Bonjour, le Monde!"

main :: IO ()
main = putStrLn $ greet English
