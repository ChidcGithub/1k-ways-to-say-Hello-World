main :: IO ()
main = do
    let greeting = "Hello, World!"
        result = greeting `seq` ()
        _ = result
    putStrLn greeting
