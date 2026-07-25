{-# LANGUAGE DataKinds, KindSignatures #-}
import GHC.TypeLits (Symbol, symbolVal)
import Data.Proxy (Proxy(..))

main :: IO ()
main = putStrLn $ symbolVal (Proxy :: Proxy "Hello, World!")
