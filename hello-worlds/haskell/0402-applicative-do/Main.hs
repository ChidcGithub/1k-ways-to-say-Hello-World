{-# LANGUAGE ApplicativeDo #-}

main :: IO ()
main = do
    greeting <- return ("Hello, World!" :: String)
    putStrLn greeting
