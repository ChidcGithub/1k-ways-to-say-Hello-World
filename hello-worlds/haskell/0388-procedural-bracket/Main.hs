import Control.Exception (bracket)

main :: IO ()
main = bracket
    (return "Hello, World!")
    (\_ -> return ())
    putStrLn
