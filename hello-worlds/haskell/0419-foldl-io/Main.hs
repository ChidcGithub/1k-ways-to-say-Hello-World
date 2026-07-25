main :: IO ()
main = foldl (\act c -> act >> putChar c) (return ()) "Hello, World!\n"
