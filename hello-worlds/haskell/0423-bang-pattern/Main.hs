{-# LANGUAGE BangPatterns #-}

main :: IO ()
main = do
    let !greeting = "Hello, World!"
    putStrLn greeting
