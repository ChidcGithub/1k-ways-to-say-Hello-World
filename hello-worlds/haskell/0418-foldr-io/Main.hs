main :: IO ()
main = foldr (\c rest -> putChar c >> rest) (return ()) "Hello, World!\n"
