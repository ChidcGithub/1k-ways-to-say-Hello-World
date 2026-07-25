main :: IO ()
main = do
    let joyful = True
    if joyful
        then putStrLn "Hello, World!"
        else return ()
