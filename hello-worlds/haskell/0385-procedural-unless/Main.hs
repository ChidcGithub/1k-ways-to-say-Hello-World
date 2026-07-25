import Control.Monad (unless)

main :: IO ()
main = do
    unless False $ putStrLn "Hello, World!"
