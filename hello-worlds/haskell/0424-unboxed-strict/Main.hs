{-# LANGUAGE MagicHash #-}
import GHC.Exts (Int(..))

main :: IO ()
main = putStrLn $ "Hello, World! " ++ show (let (I# n) = (42 :: Int) in n)
