{-# LANGUAGE MultiWayIf #-}

main :: IO ()
main = do
    let lang = "en"
    if | lang == "en" -> putStrLn "Hello, World!"
       | lang == "es" -> putStrLn "Hola, Mundo!"
       | otherwise    -> putStrLn "Hello, World!"
