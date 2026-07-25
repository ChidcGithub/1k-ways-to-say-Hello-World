{-# LANGUAGE TypeApplications, ScopedTypeVariables #-}
import Data.Typeable (typeOf)

main :: IO ()
main = putStrLn $ "Hello, World! (type: " ++ show (typeOf @String "Hello, World!") ++ ")"
