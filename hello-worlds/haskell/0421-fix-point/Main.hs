main = fix (\f -> putStrLn "Hello, World!" >> f)

fix :: (a -> a) -> a
fix f = let x = f x in x
