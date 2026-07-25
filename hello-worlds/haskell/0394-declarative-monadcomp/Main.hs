{-# LANGUAGE MonadComprehensions #-}

main :: IO ()
main = putStrLn =<< [x ++ "!" | x <- return "Hello, World"]
