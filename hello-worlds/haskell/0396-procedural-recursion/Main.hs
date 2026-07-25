main :: IO ()
main = go "Hello, World!"
  where
    go :: String -> IO ()
    go [] = return ()
    go (x:xs) = do
        putChar x
        go xs
