{-# LANGUAGE LambdaCase #-}
main = (\case True -> putStrLn "Hello, World!"; False -> return ()) True
