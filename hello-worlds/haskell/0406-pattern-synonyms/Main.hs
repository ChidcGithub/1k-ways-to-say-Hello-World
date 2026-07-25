{-# LANGUAGE PatternSynonyms #-}

pattern Greeting :: String
pattern Greeting = "Hello, World!"

main :: IO ()
main = putStrLn Greeting
